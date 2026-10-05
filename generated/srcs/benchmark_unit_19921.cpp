#include "bench/fib.hpp"

// RE Benchmark TU 19921 of 20000 (depth=28, stamp="default")
namespace bench_tu_19921 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19921>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19921
