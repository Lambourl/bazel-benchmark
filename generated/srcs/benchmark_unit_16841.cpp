#include "bench/fib.hpp"

// RE Benchmark TU 16841 of 20000 (depth=28, stamp="default")
namespace bench_tu_16841 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16841>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16841
