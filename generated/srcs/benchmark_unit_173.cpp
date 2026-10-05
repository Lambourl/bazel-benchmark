#include "bench/fib.hpp"

// RE Benchmark TU 173 of 20000 (depth=28, stamp="default")
namespace bench_tu_173 {
constexpr unsigned long long result = ::bench::slow_fib<28, 173>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_173
