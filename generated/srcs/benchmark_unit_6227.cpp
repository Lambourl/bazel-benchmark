#include "bench/fib.hpp"

// RE Benchmark TU 6227 of 20000 (depth=28, stamp="default")
namespace bench_tu_6227 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6227>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6227
