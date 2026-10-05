#include "bench/fib.hpp"

// RE Benchmark TU 3921 of 20000 (depth=28, stamp="default")
namespace bench_tu_3921 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3921>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3921
