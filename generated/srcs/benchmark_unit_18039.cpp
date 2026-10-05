#include "bench/fib.hpp"

// RE Benchmark TU 18039 of 20000 (depth=28, stamp="default")
namespace bench_tu_18039 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18039>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18039
