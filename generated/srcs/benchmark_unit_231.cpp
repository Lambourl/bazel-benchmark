#include "bench/fib.hpp"

// RE Benchmark TU 231 of 20000 (depth=28, stamp="default")
namespace bench_tu_231 {
constexpr unsigned long long result = ::bench::slow_fib<28, 231>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_231
