#include "bench/fib.hpp"

// RE Benchmark TU 961 of 20000 (depth=28, stamp="default")
namespace bench_tu_961 {
constexpr unsigned long long result = ::bench::slow_fib<28, 961>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_961
